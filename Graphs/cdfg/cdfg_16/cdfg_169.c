#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1052895397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, char p_5, unsigned long long p_9,
                   long long p_11[1])
{
  char v_15;
  signed char v_13;
  float v_7;
  double v;
  unsigned short result;
  v_15 = (char)23;
  v_13 = (signed char)-80;
  result = (unsigned short)30556;
  v = (double)588085835;
  if ((631746774L * (long)v - (long)((int)p + 1938)) / (long)((int)v_13 + 657) <= (long)v_15) {
    v_7 = (float)(! -116639632);
    v = (double)((unsigned long long)((int)p + (int)((unsigned char)v_7)) % (
                 386710241ULL % (p_9 + 855ULL) + 300ULL)) / -1.18578957694e+12;
    result = (unsigned short)(((double)(-4218102272.f + (float)result) / (
                               v + 490.)) / ((double)(((int)result ^ (int)p) % (
                                                      (int)p_5 + 164)) + 957.));
  }
  else result = (unsigned short)(p_9 - (unsigned long long)(! (p_11[0] + 4294950576LL)));
  return result;
}


