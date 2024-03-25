#pragma once
#include <memory>
#include <string>
#include <vector>
#include <iostream>

class RocketStage {
public:
    RocketStage(const std::string& name, int fuel_amount)
        : name_(name), fuel_amount_(fuel_amount) {}

    const std::string& name() const { return name_; }
    int fuel_amount() const { return fuel_amount_; }

private:
    std::string name_;
    int fuel_amount_;
};

class Rocket {
public:
    void AddStage(std::unique_ptr<RocketStage> stage) {
        stages_.push_back(std::move(stage));
    }
    void Launch() {
        for (auto& stage : stages_) {
            std::cout <<"Fuel amount: " << stage->fuel_amount() << std::endl;
            if (stage->fuel_amount() <= 0) {
                throw std::runtime_error("Error while running stage " + stage->name());
            }
        }
    }
private:
    std::vector<std::unique_ptr<RocketStage>> stages_;
};