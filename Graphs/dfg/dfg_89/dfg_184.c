#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1033208641
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, short p_7, float p_9, unsigned int p_11[2])
{
  short v_17;
  unsigned long long v_15;
  unsigned int v_13;
  signed char v_5;
  long v;
  unsigned long result;
  v_17 = (short)4234;
  v_15 = (unsigned long long)p;
  v_13 = 4128375319U;
  v = 321035910L;
  v_13 -= (unsigned int)v_17;
  v_5 = (signed char)v_15;
  result = (unsigned long)(~ ((v + (long)p) / (v / (long)((int)v_5 + 358) + 182L))) - (unsigned long)(
           (unsigned int)(((int)v_5 * (int)p_7) % ((int)(- p_9) + 923)) % (
           ((p_11[1] - (unsigned int)-169679516.539) + (v_13 << 30)) + 791U));
  result = ! result * 469800222UL;
  return result;
}


