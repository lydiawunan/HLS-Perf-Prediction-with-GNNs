#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 170316451
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, unsigned long long p_9, long long p_11)
{
  unsigned char v_7;
  unsigned char v_5;
  long v;
  unsigned char result;
  v_5 = (unsigned char)p_11;
  v = (long)p_11;
  while (- (! (-28LL / (p + 601LL))) == (long long)(4294933128UL / (unsigned long)(
                                                    v / 654L + 809L))) {
    result = (long long)v_5 & 29536LL;
    v_5 = (unsigned char)p_11;
    v_7 = (unsigned char)(- ((unsigned long long)(34099 >> ((int)result & 31)) + p_9));
    v = (long)(- (~ v_7));
  }
  while_0_break: ;
  result = (unsigned char)(-38577L & ~ (v & v));
  return result;
}


