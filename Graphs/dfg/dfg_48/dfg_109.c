#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071166386
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p)
{
  long long v_13;
  char v_11;
  unsigned long v_8;
  unsigned long long v_6;
  short v_4;
  unsigned char v;
  unsigned char result;
  v_13 = (long long)p;
  v_11 = (char)-99;
  v_6 = (unsigned long long)p;
  result = (unsigned char)117;
  v_8 = (unsigned long)((-63LL * ~ (~ v_13)) % (long long)((int)p + 561));
  v = (unsigned char)((unsigned int)p - (unsigned int)(185 % ((int)v_11 + 954)) % (unsigned int)(
                                        (int)p + 608));
  v_4 = (short)v;
  result = (unsigned char)((double)(- (((unsigned long)v - 84327544UL) % (unsigned long)(
                                       ((int)v_4 - (int)result) + 782))) / (
                           (5.89952000559e+37 / ((double)v_6 + 11.) + (double)(- (
                            v_8 + (unsigned long)p))) + 504.));
  return result;
}


