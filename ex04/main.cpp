/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:47:14 by datran            #+#    #+#             */
/*   Updated: 2023/09/21 11:59:26 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filePath> <s1> <s2>"
                  << std::endl;
        return EXIT_FAILURE;
    }
    std::string filePath(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::ifstream input(filePath);
    if (!input) {
        std::cerr << "Could not read " << filePath << std::endl;
        return EXIT_FAILURE;
    }
    std::string outputFilePath = filePath + ".replace";
    std::ofstream output(outputFilePath);
    if (!output) {
        std::cerr << "Could not write " << outputFilePath << std::endl;
        return EXIT_FAILURE;
    }
    std::string line;
    int countLine = 0;
    while (getline(input, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        output << line << std::endl;
        countLine++;
    }
    if (countLine == 0)
        output << "";
    input.close();
    output.close();
    return EXIT_SUCCESS;
}
