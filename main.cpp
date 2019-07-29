#include "all_functions_variables.hpp"
struct position{
  int eval;
  int sqaures[8][8];
};
struct move{
  int initialfile;
  int intialrank;
  int targetrank;
  int targetfile;
  bool enpassant;
  bool castle;
  bool promotion;
};
int main(){
  position mainboard;
  return 0;
}