#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 356783257
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p[2][5][1], signed char p_7, signed char p_9)
{
  unsigned char v_11;
  unsigned short v_5;
  long long v;
  char result;
  v = -61994LL;
  v_11 = (unsigned char)142;
  v_5 = (unsigned short)((int)p_9 / ((int)((signed char)741048000.f) + 145));
  result = (char)(((-34111LL + v) + (long long)((long)p[0][4][0] * ((long)v_5 % 505658554L))) % (long long)(
                  ((-7 - (int)(- p_7)) >> ((unsigned long)p_9 % ((unsigned long)v_11 / 3377306767UL + 709UL) & 31UL)) + 661));
  result = result;
  return result;
}


