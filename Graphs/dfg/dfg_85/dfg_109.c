#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576847405
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, long long p_9, double p_13, unsigned int p_15,
           double p_17)
{
  unsigned long long v_23;
  unsigned char v_21;
  int v_19;
  int v_11;
  short v_6;
  float v_4;
  signed char v;
  double result;
  v_23 = 18446744073709527687ULL;
  v_21 = (unsigned char)193;
  v_19 = (int)p_9;
  v_6 = (short)p;
  v_4 = (float)p_13;
  v = (signed char)p_15;
  result = (double)p_9;
  v_11 = (int)((unsigned long long)((int)(((double)v_19 / (result + 503.)) / (
                                          (result - (double)p) + 920.)) % (
                                    ((int)(~ v_21) - (int)((unsigned char)p_13)) + 369)) % (
               ((unsigned long long)(p_13 - 25.) / (((unsigned long long)result ^ v_23) + 217ULL)) / (unsigned long long)(
               ~ (-11645LL * p_9) + 458LL) + 721ULL));
  v_6 = v_6;
  result = (double)(~ ((long long)((double)(47U / (p_15 + 714U)) + - p_17) % (
                       (p_9 ^ (long long)(- v_4)) + 561LL)));
  result = (double)(((unsigned long long)((int)v * ((int)((short)v_4) - (int)v_6)) - 
                     (unsigned long long)(-275911468LL | (long long)result) * (
                     28785ULL - (unsigned long long)p)) * (unsigned long long)(
                    ! p_9 + (long long)(((int)3999790336.f / (v_11 + 77)) / (
                                        (int)(- p_13) + 509))));
  return result;
}


