#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 58993601
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, unsigned int p_4, signed char p_7, signed char p_11)
{
  unsigned char v_9;
  unsigned long v;
  char result;
  v_9 = (unsigned char)p_11;
  v = (unsigned long)p_4;
  result = (char)(((long long)((unsigned int)v_9 % (p + 759U) - 4294967264U) + ~ (
                   -825780448LL + (long long)p_7)) | (long long)(~ ((int)v_9 * 42)));
  result = (char)((unsigned long)((p % 205U + (p_4 - (unsigned int)result)) * (
                                  ! p >> (v & 31UL))) / (((unsigned long)p_7 - 928414154UL) + 16UL));
  return result;
}


