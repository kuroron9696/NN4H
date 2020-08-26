#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__translator_58_840_45729480;

SignalI z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makez__value_45748780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)my__translator_58_840_45729480;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),32);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makeaddr_45748520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)my__translator_58_840_45729480;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makeremaining_45748140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)my__translator_58_840_45729480;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_bit(),24);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __43724500;

void code__43724500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
            first = value2integer(make__44526880());
            last = value2integer(make__44526840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
            first = value2integer(make__44526100());
            last = value2integer(make__44525760());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),24),dst);
      set_value_pos(pool_state);
   dst; }),remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
}

Block make__43724500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43724500 = block;
   block->owner = (Object)__44531460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43724500;

   return block;
};

Value make__44526880() {
   static unsigned long long data[] = { 31ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44526840() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44526100() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44525760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __45734500;

Behavior __44531460;

Behavior make__44531460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44531460 = behavior;
   behavior->owner = (Object)__45734500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->block = make__43724500();

   return behavior;
}

Scope make__45734500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45734500 = scope;
   scope->owner = (Object)my__translator_58_840_45729480;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44531460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__translator_58_840_45729480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__translator_58_840_45729480 = systemT;
systemT->owner = NULL;
   systemT->name = "my_translator:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_45748780();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeaddr_45748520();
   systemT->outputs[1] = makeremaining_45748140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45734500();

   return systemT;
}