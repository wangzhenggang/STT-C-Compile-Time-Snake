#import "snake.h"
using state = State<PlayerState::Alive,Position<5,5>,Direction::Right,Grid<List<List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Snake,1,Direction::Right>,Cell<CellState::Food,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>,List<Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>,Cell<CellState::Empty,0,Direction::Left>>>>,prandom::PseudoRandomGenerator<10,prandom::Lfsr<std::integer_sequence<bool,false,true,true,false,true,false,true,true,false,false,true,true,true,false,false,false>,std::integer_sequence<size_t,0,10,12,13,15>>>>;