#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 415267491
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, short p_4, short p_6, char p_11,
          unsigned long p_15)
{
  double v_33;
  signed char v_31;
  long v_29;
  int v_27;
  unsigned int v_25;
  long v_23;
  short v_21;
  int v_19;
  unsigned char v_17;
  long long v_13;
  unsigned long long v_9;
  unsigned long long v;
  short result;
  v_33 = (double)p_11;
  v_31 = (signed char)p_4;
  v_27 = (int)p_4;
  v_25 = 3719891665U;
  v_23 = 62096L;
  v_21 = p_4;
  v_17 = (unsigned char)p_4;
  v_9 = (unsigned long long)p_11;
  v = 1007312883ULL;
  result = p_6;
  if (3965460624U >= (unsigned int)(- ((int)p_6 % ((int)v_21 + 971)) / (
                                    (int)((float)(- p_15) - -624.04296875f) + 102))) {
    v_19 = (int)(p_15 / (unsigned long)((int)p_6 * (int)v_21 + 809) + ~ (
                 (unsigned long)v_23 & (unsigned long)v_25));
    v_9 = (unsigned long long)((unsigned long)v_19 / (p_15 + 473UL));
    result = (short)(2.64796132821e+38 + (double)(((int)p_11 % ((int)v_17 + 272)) * 113));
  }
  else {
    v_29 = (long)(763954666ULL * (3338331414ULL / ((v_9 + (unsigned long long)v_23) + 751ULL)));
    v = (unsigned long long)((double)((long)(127 - v_27) % (! v_29 + 559L)) / (
                             ((double)(! v_31) - (double)p_11 / (v_33 + 806.)) + 594.));
    v_9 = (unsigned long long)(0 % (unsigned long)(- (-10634L * (long)p) + 1004L));
  }
  while (18446744073096799200ULL << ((int)(~ (~ p)) & 63) < ((unsigned long long)(
                                                             (unsigned long)(
                                                             (int)p + (int)p_4) - 
                                                             (unsigned long)p_6 % 72998024UL) | v)) {
    result = v_9 + 59237ULL;
    v_9 = 6366ULL;
    v_13 = (long long)(! ((unsigned long)((long)p_6 + -724529090L) + 859645710UL));
    v = (unsigned long long)((long long)((int)(~ p_11) - (int)(- p_11)) * (
                             ! v_13 - -467447543LL * (long long)p_15));
  }
  while_0_break: ;
  return result;
}


