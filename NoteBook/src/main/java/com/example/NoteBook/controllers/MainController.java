package com.example.NoteBook.controllers;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class MainController {
    @GetMapping("/")
    public String main_page(){

        return "main";
    }

    @GetMapping("/about")
    public String about_page(){

        return "about";
    }
}
