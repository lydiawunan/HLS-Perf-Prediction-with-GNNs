#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 498043466
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p[4][5][3], long p_4[4][5], unsigned long long p_6[3][3][1],
          signed char p_8[5][1], unsigned long p_11)
{
  signed char v_21;
  char v_19;
  char v_17;
  unsigned short v_15;
  long v_13;
  unsigned long long v;
  float result;
  v_21 = (signed char)p_11;
  v_19 = (char)-89;
  v_15 = (unsigned short)4350;
  v_13 = (long)p_8[3][0];
  result = -3.33057569796e+38f;
  if ((unsigned long)(31400U ^ (unsigned int)result * ((unsigned int)v_21 % 27021U)) > (
      (unsigned long)((int)(result / (result + 384.f)) | -33215 * (int)v_15) ^ 
      p_11 * 291290UL)) {
    v = (unsigned long long)(- ((-62975LL - (long long)p_11) + (long long)6.0585830083e+37 / -974993773LL));
    v_15 = (unsigned short)p_6[2][2][0];
    v_13 = (long)((unsigned long long)(! (! p_4[0][4])) ^ 4294952546ULL * (
                                                          11388ULL + p_6[2][1][0]));
  }
  else {
    v_17 = (char)(4294949591UL % ((((unsigned long)v_19 + 3952262049UL) | 6337UL) + 863UL));
    v = (unsigned long long)v_13 | (18446744073709551613ULL * p_6[1][2][0]) % (unsigned long long)(
                                   (unsigned long)v_17 % (p_11 + 384UL) + 95UL);
    v_15 = (unsigned short)(~ (~ (- p_4[1][2])));
  }
  if ((unsigned long long)-154040976.f != ((((unsigned long long)p_8[2][0] ^ v) + (unsigned long long)p_11) ^ (unsigned long long)(
                                           (v_13 % (long)((int)v_15 + 660)) * -90L))) 
    result = (float)(- ((unsigned long long)(~ p[1][1][1]) * ((unsigned long long)p_4[0][1] - p_6[1][1][0])));
  else result = (float)p[3][4][1];
  return result;
}


