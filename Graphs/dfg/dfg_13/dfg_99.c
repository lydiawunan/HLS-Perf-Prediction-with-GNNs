#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 161379092
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned short p_11)
{
  long v_9;
  unsigned short v_6;
  unsigned char v_4;
  unsigned int v;
  unsigned short result;
  v_9 = (long)p_11;
  v_6 = p;
  result = p;
  v_4 = (unsigned char)(! (~ ((int)p * 202)) ^ (int)p_11);
  v = (unsigned int)(~ ((unsigned long long)((unsigned long)result) * (
                        4129ULL + (unsigned long long)(v_9 ^ 7314L))));
  v = (unsigned int)(((long long)((int)v_6 ^ (int)(! p)) | (-126772643LL + (long long)(
                                                            (unsigned int)3.04123880918e+38f + v))) % (long long)(
                     (int)(- (- (! p))) + 20));
  result = (unsigned short)((unsigned long)(- (~ (v % (v + 225U)))) + ~ (
                            0UL - (unsigned long)v_4 * 882690636UL));
  return result;
}


