#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 98580392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p)
{
  unsigned long v_12;
  int v_10;
  signed char v_8;
  char v_6;
  float v_4;
  double v;
  unsigned int result;
  v_12 = 662UL;
  v_6 = (char)-101;
  v_4 = -2.26237237539e+38f;
  v = (double)p;
  v_10 = (int)((long long)(! (98 | (int)((signed char)v_4)) + -32643) * p);
  v_8 = (signed char)((long long)(- v_10) * ~ ((long long)v_12 % (p % 236LL + 590LL)));
  result = (unsigned int)((double)((759316856LL & (long long)(v / (double)(
                                                              v_4 + 170.f))) * (long long)(- (
                                   (int)v_6 ^ (int)v_8))) * - ((27.5319817219 * v) * -114.));
  result = - (~ ((3222393506U & result) - (unsigned int)v));
  return result;
}


