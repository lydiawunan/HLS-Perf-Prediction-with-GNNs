#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 422620476
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned char p_9, unsigned int p_11,
                       short p_13[5][5][4], int p_15)
{
  short v_25;
  unsigned long v_23;
  long v_21;
  long v_19;
  unsigned short v_17;
  unsigned short v_7;
  char v_4;
  unsigned char v;
  unsigned long long result;
  v_25 = (short)p_9;
  v_23 = 43957274UL;
  v_19 = -47734L;
  if ((double)((unsigned long long)((unsigned long)p_15 / (v_23 + 973UL)) - 18446744073709517434ULL) - 1523.74113415 == (double)v_25) {
    result = (unsigned long long)v_19;
    v_4 = (char)15;
    v_17 = (unsigned short)((unsigned long long)(- (! p)) % ((unsigned long long)p_9 / (
                                                             (result - (unsigned long long)p_13[4][4][2]) + 8ULL) + 698ULL));
  }
  else {
    v_4 = (char)-87;
    v_21 = (long)v_23;
    v_17 = (unsigned short)((long long)(! (~ v_21)) / 269456497LL);
  }
  if (p_11 == (unsigned int)(((int)((unsigned char)-287.038233537) | 215) % (
                             (int)v_17 + 58))) {
    v = (unsigned char)(~ (! (-753LL - p)));
    result = (unsigned long long)(~ 4294918485U);
    result = - ((unsigned long long)(305392915UL % (unsigned long)((int)v + 889)) + 
                (unsigned long long)v_4 % (result + 90ULL));
  }
  else {
    v_7 = (unsigned short)p_11;
    result = (unsigned long long)((long long)(27857043 % ((int)v_7 + 829)) * p ^ (long long)(
                                  87 / ((156 - (int)p_9) + 145)));
  }
  return result;
}


