#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 937260377
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p[3][2][3])
{
  long long v_11;
  long long v_9;
  char v_6;
  int v_4;
  unsigned long long v;
  unsigned char result;
  v_11 = -667702391LL;
  v_6 = (char)p[1][1][2];
  v_4 = (int)p[2][0][1];
  v_9 = v_11;
  result = (unsigned char)((v_4 / ((int)(- (- v_6)) + 656)) % ((int)(- (
                                                               ((double)p[0][0][1] + 821.55814355) * (double)(
                                                               v_9 / (
                                                               v_11 + 683LL)))) + 870));
  v = (unsigned long long)result;
  result = (unsigned char)((int)result / ((6207 >> (v * (unsigned long long)-1.96151406383e+38f & 31ULL)) + 963) + 122);
  return result;
}


