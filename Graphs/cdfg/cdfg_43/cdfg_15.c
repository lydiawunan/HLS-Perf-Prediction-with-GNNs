#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 363615283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p[5][5], unsigned long long p_4, short p_6,
                  char p_8[3][5][1], long long p_11)
{
  short v_13;
  unsigned char v;
  unsigned long result;
  v = (unsigned char)p_11;
  v_13 = (short)(! 37146ULL);
  if ((long long)p_6 < (((long long)p_8[2][4][0] + (long long)v * 777344079LL) & 
                        (20LL * p_11) % (long long)((int)v_13 * (int)v_13 + 483))) 
    result = (unsigned long)((long long)p[0][3] / 584105380LL);
  else result = (unsigned long)p_4;
  return result;
}


