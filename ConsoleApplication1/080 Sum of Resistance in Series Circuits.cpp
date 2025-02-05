//When resistors are connected together in series, the same current passes through each resistor in the chain and the total resistance, RT, of the circuit must be equal to the sum of all the individual resistors added together.
//That is: RT = R1 + R2 + R3 ...
//Create a function that takes an array of values resistance that are connected in series, and calculates the total resistance of the circuit in ohms.
//The ohm is the standard unit of electrical resistance in the International System of Units ( SI ).
#include "080 Sum of Resistance in Series Circuits.h"
std::string seriesResistance(std::vector<double> arr) {
    double sum = 0.0;
    for (const auto& i : arr) {
        sum += i;
    }

    // Check if the result is approximately 1 ohm
    if (std::abs(sum - 1.0) < 1e-9) {
        return "1 ohm";
    }

    // Prepare the output string
    std::ostringstream result;
    if (std::abs(sum - std::floor(sum)) < 1e-9) {
        // If the sum is effectively an integer
        result << static_cast<int>(sum);
    }
    else {
        // If the sum is not an integer, format with one decimal place
        result.precision(1);
        result << std::fixed << sum;
    }

    // Add the correct unit
    return (sum <= 1.0) ? result.str() + " ohm" : result.str() + " ohms";
}