#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 750421333
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, signed char p_4, int p_11,
                  unsigned short p_13)
{
  short v_9;
  signed char v_7;
  signed char v;
  unsigned char result;
  v_9 = (short)p_11;
  v_7 = p_4;
  result = (unsigned char)((unsigned long long)(p_11 / ((53488 / ((int)p_13 + 966) | (int)(- v_7)) + 541)) + ! (
                           (unsigned long long)((int)p_13 % 475693298) / 651701380ULL));
  v_7 = p_4;
  v = (signed char)(- (- (! (193 / ((int)result + 934)))));
  result = (unsigned char)((long long)(- ((int)(- p) - ((int)p_4 & (int)p))));
  return result;
}


