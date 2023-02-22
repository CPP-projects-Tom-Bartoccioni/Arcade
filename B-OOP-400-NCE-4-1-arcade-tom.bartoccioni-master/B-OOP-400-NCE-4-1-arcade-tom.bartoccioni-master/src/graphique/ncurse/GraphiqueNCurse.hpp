/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-arcade-tom.bartoccioni
** File description:
** GraphiqueNCurse
*/

#ifndef GRAPHIQUENCURSE_HPP_
#define GRAPHIQUENCURSE_HPP_

#include "IncludeNCurse.hpp"

namespace arcade {
    class GraphiqueNCurse : public IDisplay{
        public:
            GraphiqueNCurse();
            ~GraphiqueNCurse();

            /* ----- Getter ----- */
            // Get the last event
            int getEvent();
            const std::string &getName() const {return _name;}

            /* ----- Methods ----- */
            // Init NCurses
            void init();
            // Exit NCurses
            void stop();
            // Start the graphique
            void run();
            // Print a map based on a std::string "map"
            void displayMap(const std::vector<std::string> map);
            // Print txt at "x" and "y" pos
            void displayText(const int posx, const int posy, const std::string &text);
            // Print a square at "x" and "y" pos, size of "xLong" and "yLong"
            void displayRect(const int x, const int y, const int w, const int h, const std::vector<int> color = {6, 139, 196});
            // Print the asset "assetName" at "x" and "y" pos, otherwise print the "otherwise" char
            void printAsset(const std::string assetName, const int x, const int y, const char otherwise);
            // Clear the window
            void clear();
            // Refresh the window
            void refresh();

        protected:
        private:
            WINDOW *_winGame;
            int _lines;
            int _cols;
            std::string _name;
            bool _open;
    };
}

#endif /* !GRAPHIQUENCURSE_HPP_ */
