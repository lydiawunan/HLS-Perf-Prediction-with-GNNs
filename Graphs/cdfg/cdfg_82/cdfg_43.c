#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 14564255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, float p_9, long long p_11)
{
  short v_15;
  unsigned int v_13;
  unsigned char v_7;
  unsigned long v_4;
  char v;
  unsigned int result;
  v_15 = (short)5423;
  v_13 = 4294953578U;
  v_7 = (unsigned char)p;
  v_4 = 3896711663UL;
  v = (char)p_9;
  if (p_11 * 194LL != (long long)(((unsigned int)(! v_7) % (~ v_13 + 156U)) % (unsigned int)(
                                  (int)(- v_15) + 700))) {
    v_4 = 44745UL;
    result = 4178960872U;
    v = (char)(- ((double)result - (p - 43266.)));
  }
  else {
    v_7 = (unsigned char)((unsigned long)v / (~ (v_4 + v_4) + 76UL));
    v = (char)-13;
    v_4 = (unsigned long)(~ v_7);
  }
  result = (unsigned int)(~ ((unsigned long)(~ v) / (v_4 + 794UL)));
  return result;
}


