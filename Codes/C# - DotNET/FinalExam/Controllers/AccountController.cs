using System.Diagnostics;
using FinalExam.Models;
using Microsoft.AspNetCore.Mvc;

namespace FinalExam.Controllers
{
    public class AccountController : Controller
    {
        public ActionResult SignUp()
        {
            return View();
        }

        [HttpPost]
        public ActionResult SignUp(Student student)
        {
            // Handle signup logic and save the student to the database
            return RedirectToAction("Login");
        }

        public ActionResult Login()
        {
            return View();
        }

        [HttpPost]
        public ActionResult Login(string username, string password)
        {
            // Handle login logic and redirect based on user role
            return RedirectToAction("Dashboard");
        }

        public ActionResult Dashboard()
        {
            // Display dashboard based on user role
            return View();
        }
    }
}