#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 520111892
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, unsigned long long p_7[2])
{
  unsigned char v_4;
  short v;
  int result;
  v = (short)23295;
  result = -49346;
  v_4 = (unsigned char)32;
  result = (int)(((p_7[1] / 434474374ULL >> (-798148435L * (long)result & 63L)) + (unsigned long long)v) - (unsigned long long)v_4);
  v = (short)(- (p % (unsigned long)(580605408L * (long)result + 406L)) + (unsigned long)result);
  result = (int)((unsigned long)v / ((unsigned long)(- v_4) / 585134647UL + 238UL) + ! (- (
                 p - 42UL)));
  return result;
}


