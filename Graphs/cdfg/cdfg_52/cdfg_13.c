#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42402215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, int p_4[5], int p_6, unsigned int p_8,
                short p_15)
{
  unsigned long v_13;
  short v_11;
  long long v;
  signed char result;
  v_13 = p;
  v_11 = (short)p_4[4];
  result = (signed char)p_8;
  v = (long long)((((unsigned long)p_15 + v_13) + (unsigned long)p_15 * p) + 
                  v_13 % (unsigned long)((int)p_15 / 112 + 996));
  while ((long long)(287445747UL % (unsigned long)(- p_8 + 842U)) * (
         ! v % (long long)((int)v_11 % -19711 + 652)) <= -109LL) {
    result = v_13 % 843859224UL;
    v_13 = (unsigned long)(! (! (~ result)));
    result = (signed char)(- (83 % ((int)result + 631)) % -725743347);
    v = (long long)((~ v_13 * (unsigned long)(! result)) / (p + 752UL));
  }
  while_0_break: ;
  return result;
}


