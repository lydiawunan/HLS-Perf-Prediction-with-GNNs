#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 857550661
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned short p_11[1], char p_13)
{
  unsigned short v_9;
  unsigned int v_7;
  unsigned int v_5;
  unsigned long long v;
  long result;
  v_9 = (unsigned short)59358;
  v = (unsigned long long)p;
  result = 580854603L;
  v_5 = (unsigned int)(((long)((int)((unsigned char)-1.71477266911e+38f) / (
                               (int)p + 376)) / (- result + 191L)) / (long)(
                       84 % (((int)p_13 << (v & 7ULL)) + 82) + 938));
  while ((55429ULL * v) % 25206ULL + (unsigned long long)((int)p / -11) >= 761409537ULL) {
    result = (unsigned long)v_5 * 133742219UL;
    v_7 = (unsigned int)(- 800.273802512);
    v_5 = (unsigned int)((unsigned long)(! (! v_9)) / (- ((unsigned long)p_11[0] / 922169813UL) + 48UL));
    v = (unsigned long long)(! (- ((unsigned int)p / (v_7 + 22U))));
  }
  while_0_break: ;
  return result;
}


