#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810060074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, signed char p_9, unsigned int p_13, long p_15,
          unsigned short p_19)
{
  double v_17;
  float v_11;
  char v_6;
  signed char v_4;
  unsigned int v;
  short result;
  v_17 = -1.50961914062e+37;
  v_11 = 701.547241211f;
  result = (short)1032;
  v = (unsigned int)((((double)result + v_17) - (double)p_19) - (double)p_9);
  if ((unsigned long)(- ((unsigned int)(- v_11) / ((v - p_13) + 192U))) >= 
      (unsigned long)(- p_15) * (unsigned long)v) {
    v_4 = (signed char)25;
    v = (unsigned int)(! v_4);
    result = (short)0;
  }
  else {
    v_6 = (char)p_9;
    result = (short)((int)(~ v_6) >> ((int)p & 7));
  }
  return result;
}


