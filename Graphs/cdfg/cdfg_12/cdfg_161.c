#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027960352
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, unsigned char p_4, long long p_11, long long p_15[1],
           long p_17)
{
  signed char v_25;
  float v_23;
  double v_21;
  signed char v_19;
  short v_13;
  unsigned char v_9;
  unsigned long long v_7;
  unsigned short v;
  double result;
  v_25 = (signed char)-80;
  v_23 = 4.94649788597e+37f;
  v_21 = (double)p_17;
  v_19 = (signed char)-80;
  v_13 = (short)-7123;
  v = (unsigned short)p_15[0];
  if (-82LL != ((long long)(5 * (int)v) / (p_11 / 148LL + 816LL)) / (
               ((long long)v_19 - p_11) % -115LL + 141LL)) {
    v_19 = (signed char)(((v_21 - (double)p_4) + (double)(- p_15[0])) / (
                         (double)((p_15[0] & (long long)v) * (long long)(
                                  -39493 >> ((int)p_4 & 31))) + 356.));
    result = (double)((! p_15[0] % (long long)((21556L - p_17) + 351L)) % (long long)(
                      ((499 - (int)v_19) + (int)(~ v_19)) + 189));
    v_7 = (unsigned long long)((int)p_4 + 21244) * ! ((unsigned long long)v_13 * 22744ULL);
  }
  else {
    v = (unsigned short)(~ v_25);
    v_7 = (unsigned long long)(~ 0);
    result = (double)(! (39LL % (p_11 + 957LL) ^ 976008944LL));
  }
  while (-16.6763733576 != p + (double)(((int)((unsigned char)-2.99566716742e+38) >> (
                                         (int)p_4 & 7)) / ((int)p_4 % (
                                                           (int)v + 288) + 757))) {
    v_7 /= 18446744073709540688ULL;
    result = (double)(~ (- (! p_11)));
    v_9 = (unsigned char)((int)((unsigned char)(- p)) + (int)(! p_4));
    v = (unsigned short)(! v_9);
  }
  while_0_break: ;
  return result;
}


