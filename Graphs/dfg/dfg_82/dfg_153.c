#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205586788
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, double p_7, unsigned char p_9, char p_11,
                  unsigned long long p_13)
{
  signed char v_15;
  signed char v_5;
  unsigned long long v;
  unsigned char result;
  v_15 = (signed char)p;
  v = (unsigned long long)((double)v_15 - 360.119812012 / ((- p_7 - p_7 * 4294939006.) + 261.));
  v_5 = (signed char)(! p_9);
  v = ((18446744073580552588ULL ^ (unsigned long long)p_11) + (unsigned long long)(
       (int)v_5 + (int)((signed char)p_7))) * (unsigned long long)(((long long)p + -48453LL) / 892LL) | 
      (0ULL - v) / (unsigned long long)(~ (-263 * (int)p) + 434);
  result = (unsigned char)((((unsigned long long)p % (v + 807ULL)) % (unsigned long long)(
                            (int)v_5 / 31677 + 197)) % ((unsigned long long)(
                                                        (p_7 * (double)p_9) / (
                                                        (double)p_11 + 453.)) + 482ULL) - - (- p_13));
  return result;
}


