//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 405744523
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(void)
{
  long long v_12;
  int v_10;
  unsigned int v_8;
  signed char v_6;
  unsigned long v_4;
  short v;
  int result;
  v_12 = 25860LL;
  v_10 = 42034;
  v_4 = 14853UL;
  v = (short)-12235;
  v_8 = (unsigned int)((7596736886.78 - (double)v_12) - 504972988.);
  v_6 = (signed char)(((unsigned long long)v_8 * 931900436ULL & (unsigned long long)(
                       4294922609U * v_8 - (unsigned int)(~ v_10))) * (unsigned long long)(- (- (
                      286450268UL - v_4))));
  v = (short)(~ (462UL * ! v_4) << (-90 / ((-100 % ((int)v + 505) + (int)v_6) + 454) & 31));
  result = (int)(~ (~ (~ v)));
  return result;
}


