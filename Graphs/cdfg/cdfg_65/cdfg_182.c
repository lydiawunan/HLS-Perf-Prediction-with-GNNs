#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335435677
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, unsigned char p_11, unsigned int p_13,
                  unsigned long p_15, signed char p_19[1][4][2])
{
  short v_17;
  signed char v_9;
  unsigned char v_7;
  float v_4;
  char v;
  unsigned long result;
  v_17 = (short)23484;
  v_9 = (signed char)-58;
  if ((float)((((int)v_9 * -81) % ((-64515 - (int)p) + 690)) / ((int)(- (- p_19[0][3][1])) + 518)) < -6211771904.f) {
    v_4 = (float)(! (short)-29906);
    v_7 = (unsigned char)(((int)(- p) / ((int)p + 351)) % ((int)p * (
                                                           (int)p | (int)p_11) + 379));
    v = (char)(~ v_9);
  }
  else {
    v_4 = (float)(~ (! (p_15 * (unsigned long)v_17)));
    v = (char)(p_15 % 60090UL);
    v_7 = (unsigned char)(90U + p_13);
  }
  result = (unsigned long)((int)((float)v + v_4) * ((int)(! p) - (int)v_7));
  return result;
}


