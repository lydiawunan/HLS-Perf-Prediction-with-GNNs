#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 456973880
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, float p_4[1][1], short p_9[5][1], double p_17,
                 long p_19)
{
  char v_21;
  unsigned long v_15;
  unsigned long long v_13;
  char v_11;
  double v_7;
  long v;
  unsigned int result;
  v_21 = (char)-27;
  v_13 = 616501362ULL;
  v_11 = (char)p_4[0][0];
  v_7 = -4950017550.8;
  v_15 = (unsigned long)(p / 33259.f + (float)v_21);
  if (41335ULL % ((v_13 / 18446744073709551587ULL - (unsigned long long)(
                   (double)v_15 + p_17)) + 989ULL) < (unsigned long long)(~ p_19)) 
    result = (unsigned int)(- (- p - -91.f / (p_4[0][0] + 77.f)));
  else {
    v = -58055L;
    v_7 = (double)((27802 / ((int)v_7 + 465)) % ((int)v_7 + 689));
    result = (unsigned int)((v << ((long)(v_7 / ((double)v + 453.)) & 31L)) - (long)(! (
                            (int)p_9[2][0] << ((int)v_11 & 15))));
  }
  return result;
}


