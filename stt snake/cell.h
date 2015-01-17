/**
    Cells in the game grid.
*/
#pragma once

#include "direction.h"
#include "printer.h"

/**
    General state of a cell on the game board.
*/
enum class CellState : unsigned
{
    Empty,
    Snake,
    Food,
    Collision
};


/**
    State of a single cell on the game board. Stores both a state and a
    weight for `Snake` tiles.
*/
template <CellState s, unsigned w, Direction d>
struct Cell {
    static const CellState state = s;
    static const unsigned weight = w;
    static const Direction direction = d;
};

/**
    Unoccupied cell.
*/
using EmptyCell = Cell<CellState::Empty, 0, Direction::Left>;

/**
    Cell with a single food item.
*/
using FoodCell = Cell<CellState::Food, 0, Direction::Left>;

/**
    Cell that visually marks a collision.
*/
using CollisionCell = Cell<CellState::Collision, 0, Direction::Left>;

/**
    Cell with a snake section. `weight` is the number of turns
    it will take for the snake section to decay.
*/
template <unsigned weight, Direction direction>
using MakeSnakeCell = Cell<CellState::Snake, weight, direction>;


template <unsigned weight, Direction direction>
struct Printer<Cell<CellState::Empty, weight, direction>>
{
    static void Print(std::ostream& output) { output << "\u257a"; }
};

template <unsigned weight, Direction direction>
struct Printer<Cell<CellState::Snake, weight, direction>>
{
    static void Print(std::ostream& output)
    {
        switch (direction)
        {
        case Direction::Up: output << "\u25B2"; break;
        case Direction::Right: output << "\u25B6"; break;
        case Direction::Down: output << "\u25BC"; break;
        case Direction::Left: output << "\u25C0"; break;
        }
    }
};

template <unsigned weight, Direction direction>
struct Printer<Cell<CellState::Food, weight, direction>>
{
    static void Print(std::ostream& output) { output << "*"; }
};

template <unsigned weight, Direction direction>
struct Printer<Cell<CellState::Collision, weight, direction>>
{
    static void Print(std::ostream& output) { output << "\u2588"; }
};