#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 88184435
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned long long p_9)
{
  unsigned long v_7;
  unsigned long v_4;
  signed char v;
  int result;
  v_4 = 867262319UL;
  v = (signed char)p_9;
  v_7 = (unsigned long)(- ((18446744073709551613ULL / (p * 18446744073709551555ULL + 207ULL)) * (unsigned long long)(
                           (float)(v_4 % 4294911880UL) + -236297760.f)));
  v = (signed char)(! ((p / (unsigned long long)((int)v + 455)) / (((unsigned long long)v_7 % (
                                                                    p + 717ULL)) % (
                                                                   (unsigned long long)-4.0396497511e+37 + 506ULL) + 730ULL)));
  result = (int)(- ((unsigned long)(- v) + v_4) << ((int)v & 31));
  return result;
}


