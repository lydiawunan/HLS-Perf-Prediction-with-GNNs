#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 150130542
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, int p_9)
{
  float v_13;
  char v_11;
  double v_7;
  unsigned char v_5;
  float v;
  unsigned long result;
  v_13 = 762.155761719f;
  v_11 = (char)-33;
  v_7 = -1.8239158395e+38;
  v_5 = (unsigned char)101;
  v = (float)p;
  result = 4294919087UL;
  while ((unsigned long long)(((long)v_5 + 23317L) * ((long)v_7 + 418550519L)) - 18446744073709551615ULL != (unsigned long long)(
         -40470LL - (long long)(- (199 / (p_9 + 734))))) {
    v_11 = v_13 + (float)((int)v_11 % 40);
    v_5 = (unsigned char)(- (! result >> ((unsigned long)((double)p - v_7) & 31UL)));
    v_13 = (float)(~ 901UL);
    v_7 = (double)(result % 1UL);
  }
  while_0_break: ;
  result = (unsigned long)(24863LL % ((-42218LL + (long long)(v + (float)p)) + 551LL));
  return result;
}


