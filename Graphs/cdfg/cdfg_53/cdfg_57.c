#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 793868441
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, float p_4, unsigned short p_6, float p_9,
          unsigned long long p_13[5][3][5])
{
  short v_19;
  double v_17;
  unsigned char v_15;
  unsigned short v_11;
  unsigned char v;
  short result;
  v_19 = (short)-14341;
  v_17 = (double)p;
  v_15 = (unsigned char)36;
  v_11 = p_6;
  v = (unsigned char)30;
  if (0 > - (((int)v_11 % ((int)((unsigned short)v_17) + 10)) % ((int)v_19 + 712))) {
    v_11 = (unsigned short)(3401997326UL + (unsigned long)((int)v_15 * 44966 - 
                                                           38536 / ((int)p_6 + 231)));
    result = (short)p_9;
    v = (unsigned char)(! (p_13[4][1][4] / 821281711ULL));
  }
  else {
    v = v;
    v_11 = (unsigned short)((int)(~ (! v_11)) % ((int)(! p_6) + 204));
    result = (short)((float)((unsigned long long)p_6 * (8662ULL - p_13[2][0][0])) * (
                     (float)(31636 + (int)v_11) - p_4 * (float)p));
  }
  if ((unsigned int)(((int)p / ((int)result + 93) + (int)(! p_6)) + (int)(
                     - p_9 - (float)v_11)) == (4294955147U - (unsigned int)7053506560.f) + (unsigned int)-5.25593468668e+37) 
    result = (short)(! p);
  else {
    result = (short)(- (- ((float)v / (p_4 + 778.f))));
    result = - result;
    result = (short)(((int)p + (int)((char)p_4)) * (int)result - ~ ((int)p_6 ^ 1378));
  }
  return result;
}


