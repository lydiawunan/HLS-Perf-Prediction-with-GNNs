#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1031104392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, long long p_4, signed char p_7[2][1][2],
                  char p_11, unsigned char p_15)
{
  unsigned char v_17;
  double v_13;
  char v_9;
  char v;
  unsigned long result;
  v_17 = (unsigned char)88;
  v_13 = 948.875691334;
  v = (char)(- v_17);
  v_9 = (char)((-31364 % ((int)(v_13 + (double)p_15) + 887)) / ((int)p_15 + 760) + 
               (int)v_17 % -50);
  v = (char)(! ((int)(! (~ p_11)) | (int)v));
  result = (unsigned long)(- (((long long)((int)p - 26850) - (p_4 - (long long)v)) % (long long)(
                              (int)p_7[1][0][1] * (20362 - (int)v_9) + 388)));
  return result;
}


