#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 661821031
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p[1][4][3])
{
  unsigned int v_15;
  long v_13;
  char v_11;
  double v_9;
  float v_7;
  signed char v_4;
  long long v;
  unsigned char result;
  v_15 = (unsigned int)p[0][1][2];
  v_13 = p[0][0][1];
  v_11 = (char)-72;
  v_7 = (float)p[0][1][2];
  v_4 = (signed char)p[0][0][0];
  v = (long long)p[0][3][2];
  result = (unsigned char)p[0][0][0];
  while (311228720ULL >= (unsigned long long)(~ (v ^ 4206595681LL) | ! (
                                              (long long)v_11 % (v + 992LL)))) {
    v = (long long)p[0][1][0];
    result = (unsigned char)((unsigned long)result * ((unsigned long)(- v_15) + 298028780UL));
    v_11 = (char)(! (~ (v_13 - p[0][3][0])));
  }
  while_0_break: ;
  while (v % 4294939988LL >= (long long)(~ (27610L + (long)v_4 / (p[0][0][2] + 428L)))) {
    v_4 = (signed char)(! p[0][3][1]);
    v_9 = (double)(((int)v_4 - (int)((signed char)(- v_7))) * (int)(- (- v_7)));
    v = (long long)(32 - (int)((signed char)v_9));
  }
  while_0_break_0: ;
  return result;
}


