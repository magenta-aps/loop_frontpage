<?php
/**
 * @file
 * loop_frontpage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loop_frontpage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'frontpage_welcometext';
  $strongarm->value = 'Velkommen til It-afdelingens vidensdatabase.
Her kan du søge hjælp og vejledning i brugen af en lang række IT-værktøjer. 
Du kan stille spørgsmål og du kan hjælpe andre ved at være med til at besvare de spørgsmål, som bliver stillet på sitet. Gå ind på ”Min konto” og tilføj de emner, som du kan hjælpe andre med under punktet ”kompetencer”.
Vidensdatabasen er hjælp til selvhjælp. Den erstatter ikke IT-support. Så hvis du oplever deciderede IT- fejl skal du henvende dig til hotlinesystemet på <a href="http://medarbejderportal/itvaerktoejer">http://medarbejderportal/itvaerktoejer</a>';
  $export['frontpage_welcometext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
