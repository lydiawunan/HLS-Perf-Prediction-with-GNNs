#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 885318873
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, char p_5, short p_7, unsigned int p_9[4][2][4],
                 int p_15)
{
  float v_21;
  unsigned char v_19;
  unsigned short v_17;
  double v_13;
  float v_11;
  float v;
  unsigned int result;
  v_21 = (float)p_15;
  v_17 = (unsigned short)p_9[1][0][0];
  if (v_21 == v_21) {
    v_11 = (float)58244.1948462;
    v_13 = (double)(v_11 + 1394.f);
    v_11 = (float)(! ((p_15 + p_15) + (int)v_17));
  }
  else {
    v_19 = (unsigned char)(3.11798408974e+38 * (double)(~ p_5) - (double)(
                           (unsigned int)p_15 - ! p_9[3][0][2]));
    v_13 = (double)(- (~ v_19));
    v_11 = (float)(18446744069802378812ULL / (unsigned long long)((int)(~ p_7) + 150));
  }
  if (-1 >> ((int)((signed char)-6970792732.22) & 7) < 49 + ((int)((unsigned short)v_11) * 13200 - (int)v_13)) 
    result = (unsigned int)p;
  else {
    v = -2165029376.f;
    result = (unsigned int)(- (- v + (float)((int)p_5 % ((int)p_7 + 981))));
  }
  return result;
}


