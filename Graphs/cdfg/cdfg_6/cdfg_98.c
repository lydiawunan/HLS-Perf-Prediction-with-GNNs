#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949330160
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p[1][5], unsigned long long p_4,
          signed char p_6[2][2], char p_8, unsigned short p_10)
{
  double v_13;
  signed char v;
  float result;
  v = (signed char)-76;
  v_13 = (double)(~ ((unsigned long long)p_8 / 423640087ULL) + (unsigned long long)v);
  if ((unsigned long long)(! ((29404 >> ((int)p_8 & 15)) * ((int)p_6[0][1] - (int)v))) < 
      ((p_4 & (unsigned long long)p_8) | (unsigned long long)(52691LL + (long long)p[0][4])) % (unsigned long long)(
      - ((int)((signed char)v_13) / ((int)p_6[1][1] + 553)) + 791)) {
    result = (float)((42583ULL << 50L) * (unsigned long long)(- (- p_8)));
    result = (float)(! p_4 + (unsigned long long)((unsigned int)result * 12670U | (unsigned int)(
                                                  result - (float)p_6[0][1])));
    result = (float)(! ((int)((unsigned short)result) * (int)(! p[0][4])));
  }
  else result = (float)(- (((int)p_10 | 15562) & (int)(~ p_8)));
  return result;
}


