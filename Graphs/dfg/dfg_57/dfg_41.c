#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 361414624
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, char p_9, unsigned short p_13, unsigned char p_15,
                  float p_17)
{
  unsigned short v_11;
  unsigned int v_7;
  unsigned long v_5;
  signed char v;
  unsigned char result;
  v = (signed char)p;
  v_7 = (unsigned int)(~ (! (! ((int)p_15 % ((int)((unsigned char)p_17) + 286)))));
  v_11 = (unsigned short)p;
  v_5 = (unsigned long)(((int)p_9 % ((int)p_9 + 631)) % ((int)v_11 * (
                                                         -101 % ((int)p_13 + 388)) + 293)) % (
        ! ((unsigned long)p_9 - 18133UL) + 297UL);
  result = (unsigned char)((long)v % ((p >> (! (v_5 * (unsigned long)v_7) & 31UL)) + 849L));
  return result;
}


