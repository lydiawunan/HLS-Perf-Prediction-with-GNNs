#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 729857268
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned short p_5)
{
  unsigned int v_7;
  unsigned char v;
  signed char result;
  v = (unsigned char)132;
  result = (signed char)p_5;
  v_7 = (unsigned int)(15652UL & (unsigned long)(- result));
  if (~ (- (- v_7)) <= (unsigned int)((int)v * -6603)) result = (signed char)82;
  else {
    result = (signed char)v;
    v = (unsigned char)((-103L % (p + 293L) - -39L) / 329L);
    result = (signed char)((unsigned long)((long)result + (p - -901L)) * (
                           3571318848UL / (unsigned long)(((long)v + p) + 680L)));
  }
  return result;
}


