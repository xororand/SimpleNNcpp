#pragma once

#include <corecrt_math.h>

class active_funcs {
private:

public:
    enum type {
        fsigm,
        ftanh,
        frelu,
        flyrelu
    };
    
    static double long mean_squared_error_derivative(double long predicted, double long target) {
        return (predicted - target);
    }

    static double long sigmoid(double long x)
    {
        double long a = 1 / (1 + exp(-x));
        if (a == 0.5)
            return 0;
        return a;
    }
    static double long sigmoid_derivative(double long x) {
        return x * (1 - x);
    }
    
    static double long tanh(double long x) {
        return (exp(x) - exp(-x)) / (exp(x) + exp(-x));
    }
    static double long tanh_derivative(double long x) {
        double tanh_x = tanh(x);
        return 1 - tanh_x * tanh_x;
    }
    
    static double long relu(double long x) {
        if (x <= 0) {
            return 0;
        }
        else {
            return x;
        }
    }
    static double long relu_derivative(double long x) {
        if (x <= 0) {
            return 0;
        }
        else {
            return 1;
        }
    }
    
    static double long lyrelu(double long x) {
        if (x < 0) {
            return 0.01 * x;
        }
        else {
            return x;
        }
    }
    static double long lyrelu_derivative(double long x) {
        if (x < 0) {
            return 0.01;
        }
        else {
            return 1;
        }
    }
};