#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 529847514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, int p_9[3][4][3], char p_11)
{
  signed char v_13;
  float v_7;
  unsigned char v_4;
  double v;
  unsigned long long result;
  v_13 = (signed char)p_11;
  v_4 = (unsigned char)p;
  v_7 = (float)((long long)(- (54628 - (int)p_11)) % ((long long)(-80 - (int)v_13) * -751198074LL + 651LL));
  if ((int)(- (- v_4)) + (int)((unsigned char)(- (p + -10.8528032303f))) < (
      (int)(- (- v_7)) ^ - (! p_9[1][2][0]))) {
    v = (double)(- (short)-3458);
    result = 0 % ((unsigned long long)v + 675ULL);
  }
  else result = 54843ULL;
  return result;
}


