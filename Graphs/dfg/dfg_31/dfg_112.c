#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 94279591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p)
{
  long v_11;
  unsigned long long v_9;
  unsigned long v_6;
  unsigned short v_4;
  unsigned char v;
  short result;
  v_11 = (long)p;
  v_9 = p;
  v = (unsigned char)229;
  v_4 = (unsigned short)(- (-11213200.9261 - (double)(((unsigned long long)v_11 / (
                                                       p + 504ULL)) / 672394485ULL)));
  v_6 = (unsigned long)(11095.5929838 * (double)v_4);
  v_4 = (unsigned short)((p * (p % (unsigned long long)(v_6 + 863UL)) - (unsigned long long)v_6) % 1026633398ULL);
  result = (short)((unsigned long long)v | ((unsigned long long)((unsigned long)(
                                                                 (int)v_4 % (
                                                                 (int)v_4 + 633)) - - v_6) + (
                                            (p - v_9) ^ 531938483ULL)));
  return result;
}


