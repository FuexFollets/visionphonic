#include <iostream>
#include <iterator>
#include <SFML/Audio.hpp>

int main(int argc, char** argv) {
    sf::SoundBuffer buffer;

    if (argc < 2) {
        std::cout << "Usage: " << *std::next(argv, 1) << " <filename>\n";
        return 1;
    }

    if (!buffer.loadFromFile(*std::next(argv, 1))) {
        std::cout << "Error loading file\n";
        return 1;
    }

    std::cout << "First sample: " << *buffer.getSamples() << "\n";
    std::cout << "Channel count: " << buffer.getChannelCount() << "\n";
    std::cout << "Printing from test_sfml_audio.cpp\n";

    const bool successful {buffer.loadFromSamples(buffer.getSamples(), 1 / 2 * buffer.getSampleCount(),
                                                  1, buffer.getSampleRate() * 4)};

    std::cout << "Successful: " << successful << "\n";

    sf::Sound sound {buffer};

    sound.play();

    while (sound.getStatus() == sf::Sound::Playing) {
        sf::sleep(sf::milliseconds(100));
    }
}
