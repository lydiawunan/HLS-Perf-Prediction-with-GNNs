#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628318153
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, unsigned long p_5, double p_9,
         unsigned short p_13[5][3][4], long p_15[5][3][5])
{
  short v_23;
  signed char v_21;
  unsigned long long v_19;
  unsigned int v_17;
  int v_11;
  float v_7;
  char v;
  long result;
  v_23 = (short)p;
  v_17 = (unsigned int)p_15[3][2][3];
  v_11 = -416755859;
  if (72UL - ((unsigned long)p_15[1][1][1] * 39638UL | - p_5) == (unsigned long)v_23) {
    v_21 = (signed char)70;
    v_7 = (float)(-121 * (int)((signed char)(- (p_9 / 991974780.))));
    v_19 = (unsigned long long)(! (3291897430UL % ((unsigned long)v_7 + 637UL)) / (unsigned long)(
                                (int)((float)p_15[1][0][1] + 157913760.f) * (
                                77 + (int)v_21) + 78));
  }
  else {
    v_17 = 40U;
    v_11 = (int)(- p_5);
    v_19 = (unsigned long long)p;
  }
  if ((unsigned long long)(- (~ p_15[1][2][2])) <= ! ((unsigned long long)v_17 & ! v_19)) 
    result = 74L;
  else {
    v_7 = (float)(~ v_11 + (int)(~ (! p_13[4][0][0])));
    v = (char)(((int)((signed char)v_7) ^ (int)p) / ((-125 - (int)((signed char)(- p_9))) + 82));
    result = (long)((unsigned long)((int)v - (int)p) * p_5);
  }
  return result;
}


