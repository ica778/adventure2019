//
// Created by jordanhoang on 11/02/19.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <vector>
#include <array>
#include "Piece.h"
#include <unordered_map>
#include <sstream>

using std::vector;

//Contains an instance of a game
class Board {
public:
    Board();
    std::string getBoardView() const; // SHOULD BE SPERATED INTO ANOTHER CLASS BUT LEAVE HERE FOR NOW THIS IS THE MODEL! Maybe mvc isn't what we want.

    Piece& requestPiece(const ChessCoordinate &position);
    const PieceUnit requestUnit(const ChessCoordinate &position) const;
    const Color requestColor(const ChessCoordinate &position) const;


    bool movePiece(const ChessCoordinate &start, const ChessCoordinate &finish);

    const Piece getLastPieceKilled() const;


private:
    vector< vector<Piece> > boardView;
    Piece lastPieceKilled;

   void initializeGame(vector<vector<Piece>> &boardView);
   void createBackRank(Color myColor, vector<vector<Piece>> &boardView) ;
   void drawRow(vector<Piece> &listPieceId, std::stringstream &stream) const;


   bool checkHorizontalPath(const ChessCoordinate &start, const ChessCoordinate &finish) const;
   bool checkVerticalPath(const ChessCoordinate &start, const ChessCoordinate &finish) const;
   bool checkDiagonalPath(const ChessCoordinate &start, const ChessCoordinate &finish) const;
   bool isPathClear(const ChessCoordinate &start, const ChessCoordinate &finish) const;

   void promotePawnToQueen(Piece &source, const ChessCoordinate &target);

   const static std::unordered_map <PieceUnit, char> PieceLookUp;

};


#endif //CHESS_BOARD_H